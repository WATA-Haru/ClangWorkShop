# Create Clang Env
# alpine is much smaller than ubuntu
# https://panda-program.com/posts/set-up-c-lang-with-docker

FROM alpine:3.18
RUN apk add --no-cache libc-dev man gdb gcc g++ make curl &&
    apk add --no-cache bash &&
    apk --update add tzdata &&
    cp /usr/share/zoneinfo/Asia/Tokyo /etc/localtime &&
    apk del tzdata &&
