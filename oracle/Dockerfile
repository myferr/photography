FROM oraclelinux:9

RUN dnf update -y && \
    dnf install -y sudo git bash make gcc gcc-c++ cmake curl vim && \
    dnf clean all && \
    rm -rf /var/cache/dnf

RUN git clone https://github.com/fastfetch-cli/fastfetch.git /tmp/fastfetch && \
    cd /tmp/fastfetch && \
    mkdir build && cd build && \
    cmake .. && \
    make && \
    make install && \
    cd / && rm -rf /tmp/fastfetch

RUN dnf remove -y make gcc gcc-c++ cmake && \
    dnf clean all && \
    rm -rf /var/cache/dnf

RUN useradd -m -s /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev

CMD ["bash"]
