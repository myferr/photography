FROM fedora:latest

RUN dnf update -y && \
    dnf install -y sudo curl vim git fastfetch && \
    useradd -ms /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev
CMD ["bash"]
