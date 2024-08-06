FROM tester-base

RUN apt-get install -y cppcheck

ENV ANALYSIS="cppcheck -q --error-exitcode=1"

ENTRYPOINT ["/home/test.sh"]