FROM opensuse/tumbleweed:latest

RUN zypper refresh && \
    zypper install -y sudo curl vim git fastfetch && \
    useradd -m dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev
CMD ["bash"]
