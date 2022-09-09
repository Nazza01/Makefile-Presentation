# Finds all subdirectories makefiles so it makes it easier for cleaning
CLE		=	$(shell find . -type d -name "*-*")

# Traverse each directory in the folder matching *-*
# Perform clean and fclean on each folder found
clean:
	for dir in $(CLE); do \
		$(MAKE) -C "$${dir}" clean fclean; \
	done
