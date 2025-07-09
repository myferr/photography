FROM debian:bookworm


RUN apt-get update && \
    apt-get install -y sudo curl vim git gcc g++ cmake make pkg-config libxcb1-dev libfontconfig-dev && \
    useradd -ms /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers && \
    git clone --depth=1 https://github.com/fastfetch-cli/fastfetch.git /opt/fastfetch && \
    mkdir -p /opt/fastfetch/build && \
    cd /opt/fastfetch/build && \
    cmake .. && \
    make -j$(nproc) && \
    make install && \
    apt-get remove -y gcc g++ cmake make pkg-config libxcb1-dev libfontconfig-dev && \
    apt-get autoremove -y && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/* /opt/fastfetch

USER dev
WORKDIR /home/dev
CMD ["bash"]
