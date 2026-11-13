# gooficat's programming language

Copyright Hasan Sabri. All rights reserved

the heap and therefore dynamic memory is arguably as much a language concept as the stack.

implicit int does not exist. typeless functions map to void, and typeless vars are not allowed.

types are
`byte` (smallest unit that can hold an ascii character, i.e. at least 7 bits),
`word` (default integer size),
`ptr` (intptr_t equivalent), used for raw pointer math. Like `void*` from canonical C, but with a scale factor of 1,
`big` (larger integer. combines `long` and `long long`)

namespaces exist, and they have user-chosen mangling and may be accessed under both inbuilt separator and direct name.

```c
space my_space(_) {
	byte my_var;
}
main() {
	my_space_my_var = 0;
	print("%b\n", my_space_my_var);
	print("%b\n", my_space::my_var);
}
```

"unsigned" is done by suffixing the type itself with `#u`
i.e.

```c
byte#u my_char;
```

references replacing plain pointers. address must be taken explicitly.

```c
byte& my_var;

my_func(byte& a_var) {
	std::printf("%p\n", &a_var);
}
```

immutable by default

```c
byte &my_var; /* this is constant */
```

attribute for ownership with specified free function. omitting it will use `free` by default

```c
byte own(free) &my_var;
byte own &my_var;
byte mod &my_var;
byte gaze &my_var;
```

tagged types do not use tagged access, but anonymous structs still exist. Treated the same way as typedefs.

```c
struct my_struc {

};

my_struc mut own& my_struc_inst;

```
