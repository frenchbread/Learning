-module(recursive).

-export([
  fac/1,
  tail_fac/1,
  len/1,
  tail_len/1,
  duplicate/2,
  tail_duplicate/2
]).

%% basic fuctorial function

fac(0) -> 1;
fac(N) when N > 0 -> N*fac(N-1).

%% tail factorial

tail_fac(N) -> tail_fac(N,1).

tail_fac(0,Acc) -> Acc;
tail_fac(N,Acc) when N > 0 -> tail_fac(N-1, N*Acc).

%% length of a list

len([]) -> 0;
len([_|T]) -> 1 + len(T).

%% tail length of a list

tail_len(L) -> tail_len(L,0).

tail_len([], Acc) -> Acc;
tail_len([_|T], Acc) -> tail_len(T, Acc+1).

%% duplicate

duplicate(0,_) ->
  [];
duplicate(N,Term) when N > 0 ->
  [Term|duplicate(N-1,Term)].

%% tail duplicate

tail_duplicate(N,Term) ->
  tail_duplicate(N-1,Term,[]).

tail_duplicate(0,_,List) ->
  List;
tail_duplicate(N,Term,List) when N > 0 ->
  tail_duplicate(N-1, Term, [Term|List]).
