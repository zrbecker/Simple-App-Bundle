
APP = Test.app
APPDIR = $(APP)/Contents

all: $(APPDIR)/Info.plist $(APPDIR)/MacOS/test

$(APPDIR)/Info.plist: $(APPDIR)
	cp Info.plist Test.app/Contents/Info.plist

$(APPDIR)/MacOS/test: $(APPDIR)/MacOS
	g++ main.cpp -o Test.app/Contents/MacOS/test

$(APPDIR):
	mkdir -p $(APPDIR)

$(APPDIR)/MacOS: $(APPDIR) 
	mkdir -p $(APPDIR)/MacOS

clean:
	@rm -rf Test.app


