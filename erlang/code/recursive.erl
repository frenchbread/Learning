-module(recursive).

-export([
  fac/1,
  tail_fac/1,
  len/1,
  tail_len/1,
  duplicate/2,
  tail_duplicate/2,
  reverse/1,
  tail_reverse/1,
  sublist/2,
  tail_sublist/2,
  zip/2,
  lenient_zip/2
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

%% reverse list

reverse([]) -> [];
reverse([H|T]) -> reverse(T)++[H].

%% tail reverse list

tail_reverse(L) -> tail_reverse(L,[]).

tail_reverse([],Acc) -> Acc;
tail_reverse([H|T],Acc) -> tail_reverse(T, [H|Acc]).

%% sublist

sublist(_,0) -> [];
sublist([],0) -> [];
sublist([H|T],N) when N > 0 -> [H|sublist(T,N-1)].

%% tail sublist

tail_sublist(L,N) -> tail_sublist(L,N,[]).

tail_sublist(_,0,SubList) -> SubList;
tail_sublist([],_,SubList) -> SubList;
tail_sublist([H|T],N,SubList) when N > 0 ->
  tail_sublist(T,N-1,[H|SubList]).

%% zipping list to tuples

zip([],[]) -> [];
zip([X|Xs],[Y|Ys]) -> [{X,Y}|zip(Xs,Ys)].

%% lenient zipping

lenient_zip([],_) -> [];
lenient_zip(_,[]) -> [];
lenient_zip([X|Xs],[Y|Ys]) -> [{X,Y}|lenient_zip(Xs,Ys)].
