-module(recursive).

-export([fac/1]).


%% basic fuctorial function

fac(0) -> 1;
fac(N) when N > 0 -> N*fac(N-1).