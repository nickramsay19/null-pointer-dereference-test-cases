FROM debian:bookworm

RUN apt-get update -y
RUN apt-get upgrade -y

RUN apt-get install -y apt-utils
RUN apt-get install -y perl libfindbin-libs-perl hyperfine

VOLUME /home/tests
VOLUME /home/results

COPY . /home
WORKDIR /home

RUN chmod +x test.sh
CMD /bin/sh -c 'sh -x test.sh'

ENTRYPOINT ["/home/test.sh"]