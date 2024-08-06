FROM tester-base

RUN apt-get install -y llvm clang 
RUN apt-get install -y --fix-missing clang-tools

ENV ANALYSIS="scan-build -no-failure-reports --status-bugs --use-analyzer=/usr/bin/clang -enable-checker core.NullDereference --status-bugs clang -Xanalyzer -analyzer-checker=core.NullDereference -w"

ENTRYPOINT ["/home/test.sh"]