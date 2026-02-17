# Compilateur et options
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Werror -IServeur/Include

# Dossiers
SRC_DIR := Serveur
BUILD_DIR := build
TARGET := game_server
LIBFTDIR := Serveur/libft  # Chemin vers le dossier libft
LIBFT := $(LIBFTDIR)/libft.a  # Nom de la bibliothèque générée par libft

# Trouve tous les fichiers .cpp dans Serveur/ et ses sous-dossiers
SRCS := $(shell find $(SRC_DIR) -name "*.cpp" | grep -v "$(LIBFTDIR)")
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Bibliothèques (Boost.system, pthread et libft)
LIBS := -lboost_system -lpthread -L$(LIBFTDIR) -lft

# Cible par défaut
all: $(TARGET)

# Création du binaire
$(TARGET): $(LIBFT) $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(LIBS) -L/usr/lib/x86_64-linux-gnu

# Compilation des objets
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Cible pour compiler libft
$(LIBFT):
	@make -C $(LIBFTDIR)

# Nettoyage
clean:
	rm -rf $(BUILD_DIR) $(TARGET)
	@make -C $(LIBFTDIR) clean

# Recompilation complète
rebuild: clean all

.PHONY: all clean rebuild
