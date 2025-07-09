FROM alpine:latest

RUN apk add --no-cache sudo curl vim git fastfetch && \
    adduser -D dev && \
    echo "dev ALL=(ALL) NOPASSWD: ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev
CMD ["sh"]
