FROM ubuntu:latest

RUN apt-get update && \
    apt-get install -y sudo curl vim git && \
    useradd -ms /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev
CMD ["bash"]
