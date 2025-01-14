# Параметры
BUILD_DIR = ./build
APP_NAME = 3DViewer

# Параметры для вызова cmake
CMAKE := cmake
CMAKE_FLAGS := -DCMAKE_BUILD_TYPE=Release

all: install

install: $(BUILD_DIR)
	cd $(BUILD_DIR) && $(CMAKE) $(CMAKE_FLAGS) ../ && $(MAKE)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

start:
	./build/3DViewer

dvi: clean
	open ./dvi/Documentation.html

dist: install
	tar -cvzf $(APP_NAME).tgz build
	rm -rf build

unistall:
	rm -rf $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
	

#all, install, uninstall, clean, dvi, dist, tests.