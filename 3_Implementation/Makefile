ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
 
 PROJ_NAME=output
 SRC= main.c logic.c
 TST= logic.c unity.c testcase.c

all : $(SRC)
	gcc $(SRC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run : all
	.\$(call FixPath,$(PROJ_NAME).$(EXEC))

test : $(TST)
	gcc $(TST) -o $(call FixPath,$(PROJ_NAME).$(EXEC))

go : test
	.\$(call FixPath,$(PROJ_NAME).$(EXEC))
   
clean :
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))