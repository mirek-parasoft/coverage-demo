# baseline image - same as parasoft/cpptest
FROM debian:11

# install toolchains and utilities - same as parasoft/cpptest
RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
        gcc g++ make cmake git mc vim wget curl fontconfig sudo openssh-client && \
    rm -rf /var/lib/apt/lists/*

# install python and jre
RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
        python3 python-is-python3 openjdk-11-jre-headless && \
    rm -rf /var/lib/apt/lists/*

# configure default user
RUN groupadd parasoft && \
    useradd -d /home/parasoft -m -g parasoft -G sudo -s /bin/bash parasoft && \
    echo "parasoft:parasoft" | chpasswd

# install cpptest-coverage toolchain
# be sure to set docker context to the root folder of the local cpptest-coverage app
WORKDIR /opt/parasoft
COPY . cpptest-coverage/
RUN chown -R parasoft:parasoft /opt/parasoft/

# configure environment
ENV PATH="/opt/parasoft/cpptest-coverage/bin:${PATH}" CPPTEST_HOME="/opt/parasoft/cpptest-coverage"
WORKDIR /home/parasoft
USER parasoft:parasoft
