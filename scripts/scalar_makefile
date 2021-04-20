# 你的itensor在安装时的路径
LIBRARY_DIR=/home/user/th/itensor

# 如果你的main()函数在myappname.cpp文件中，那么就把此处设置为myappname
APP=s

# 如果你调用了myclass.h的自定义头文件，那么把它写在这里
#HEADERS=myclass.h

#--------- 以下内容无需修改 -----------

CCFILES=$(APP).cpp


include $(LIBRARY_DIR)/this_dir.mk
include $(LIBRARY_DIR)/options.mk

TENSOR_HEADERS=$(LIBRARY_DIR)/itensor/core.h

#Mappings --------------
OBJECTS=$(patsubst %.cpp,%.o, $(CCFILES))
GOBJECTS=$(patsubst %,.debug_objs/%, $(OBJECTS))

#Rules ------------------

%.o: %.cpp $(HEADERS) $(TENSOR_HEADERS)
	$(CCCOM) -c $(CCFLAGS) -o $@ $<

.debug_objs/%.o: %.cpp $(HEADERS) $(TENSOR_HEADERS)
	$(CCCOM) -c $(CCGFLAGS) -o $@ $<

#Targets -----------------

build: $(APP)
debug: $(APP)-g

$(APP): $(OBJECTS) $(ITENSOR_LIBS)
	$(CCCOM) $(CCFLAGS) $(OBJECTS) -o $(APP) $(LIBFLAGS)

$(APP)-g: mkdebugdir $(GOBJECTS) $(ITENSOR_GLIBS)
	$(CCCOM) $(CCGFLAGS) $(GOBJECTS) -o $(APP)-g $(LIBGFLAGS)

clean:
	rm -fr .debug_objs *.o $(APP) $(APP)-g

mkdebugdir:
	mkdir -p .debug_objs

