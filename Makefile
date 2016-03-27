CFLAGS+= -Wall

.PHONY: all
all: pam_pillow.so

pam_pillow.so: src/pam_pillow.c
	${CC} ${CFLAGS} -fPIC -shared -o pam_pillow.so -lpam -lpillowtalk src/pam_pillow.c

test:
	${CC} ${CFLAGS} -o test -lpam -lpillowtalk src/test.c

.PHONY: clean
clean:
	rm -vf test pam_pillow.so
