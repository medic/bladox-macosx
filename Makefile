
all: symlinks

clean: clean-symlinks

symlinks: clean-symlinks
	ln -s turbo-devel-1.5.24 turbo-devel && \
	ln -s utilities/x86_64 bin

clean-symlinks:
	rm -f bin turbo-devel

