![Erlang](https://upload.wikimedia.org/wikipedia/commons/4/42/Erlang_logo.png)

# Erlang

Download from [here](https://www.erlang-solutions.com/resources/download.html)

> An expression should be terminated with ". " (period with whitespace).

- [Syntax]()


### Compile

```
$ erlc <flags> file.erl
```

or (in the shell or in a module)

```
compile:file(Filename)
```

or (in the shell)

```
> c(filename)
```


#### Example:

```
1> c(useless).
{ok,useless}
2>
2> useless:hello().
Hello, World!
ok
3>
3> useless:add(7,2).
9
4>
4> useless:greet_and_add_two(-3).
Hello, World!
-1
5>
5>
```
