compile triangles: triangles.c
	@gcc -o triangles triangles.c
run: triangles
	@./triangles user
clean:
	rm triangles