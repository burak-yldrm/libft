NAME	= Bin/libft.a
# oluşturucağımız kütüphanenin adı
CC		= gcc
# gcc kullanılan compiler.
CFLAGS	= -Wall -Wextra -Werror -I. -c
# -Wall derleyici tarafından bildirilebilecek tüm uyarıları bildirir.
# -Wextra ekstra uyarıları bildirir.
# -Werror bildirilen tüm uyarıları hata olarak kabul eder.
# -I. kütüphane dosyalarını bulmak için kullanılır.
# -c derleme işlemini yapar ama bağlama işlemini yapmaz.
SRC		= $(wildcard Src/*.c)
# Src klasöründeki tüm .c uzantılı dosyaları SRC değişkenine atar.
OBJ		= $(SRC:.c=.o)
# SRC değişkenindeki .c uzantılı dosyaların .o uzantılı dosyaları ile değiştirir.
# NOT: Dosyalar çevirme işlemine tabi tutulduğu sırada flagleri otomatik olarak alır.

Color_yellow = \033[33m
Color_red = \033[31m
Color_blue = \033[34m

all: yo $(NAME)
# all kuralı çağrıldığında $(NAME) kuralı çalışır.

$(NAME): $(OBJ)
# $(NAME) kuralı $(OBJ) kuralını çağrır.
	ar -rcs $(NAME) $(OBJ)
# ar -rcs komutu kütüphane dosyası oluşturmak için kullanılır.

clean:
# clean kuralı çağrıldığında aşağıdaki komutlar çalışır.
	rm -rf $(OBJ)
# $(OBJ) değişkenindeki .o uzantılı dosyaları siler.
# rm komutu -rf parametreleri ile çalıştırıldığında dosyaları siler.
# -r parametresi klasörleri siler.
# -f parametresi salt okunur dosyaları siler.

fclean: clean
# fclean kuralı clean kuralını çağrır.
	rm -rf $(NAME)
# $(NAME) değişkenindeki kütüphane dosyasını siler.

re: fclean all
# re kuralı fclean ve all kuralını çağrır.

yo: # Önemli bir şey değil (:)
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠞⢹⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠞⠁⠀⢸⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣤⠤⠤⠤⢤⣤⣠⠔⠁⠀⠀⢀⡾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⣴⣶⣶⣶⡖⠒⠒⠒⠒⠶⠦⠤⢤⣴⠚⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡄⣠⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠈⠛⠿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠤⣄⠙⣯⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⠦⣄⣀⠀⠀⠀⠀⣰⡋⣻⣦⠀⠀⠀⠀⠀⠀⢿⣦⣿⡇⠘⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⠁⠀⠀⠹⢿⣿⠟⠀⠀⠀⢶⣴⠀⠈⠉⠉⠀⠀⣿⣄⣰⠤⢤⡀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀$(Color_red)⡠⠤⢄⡀$(Color_yellow)⠀⣀⠀⠀⢀⣤⣀⣀⠤⠀$(Color_red)⠀⢸⠀⢹⡃$(Color_yellow)⠀⠀⡏⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡼⠦⣄⣇⠀$(Color_red)⢸⠀⠀⠀⢱$(Color_yellow)⠀⠀⠑⢞⠉⠉⢻⠃⠀⠀$(Color_red)⠀⠈⢦⡾$(Color_yellow)⠀⠀⣸⠃⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣏⠀⠀⠈⠙⢦$(Color_red) ⠳⠤⠴⠋$(Color_yellow)⠀⠀⠀⠈⠓⠖⠃⠀⠀⠀⠀⣠⡞⠁⠀⢀⡏⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣆⠀⠀⠀⠀⠙⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠖⠁⠀⠀⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⣾⠛⠒⠒⠶⠤⠤⠤⠤⠤⠤⠤$(Color_yellow)⠼⣆⠀⠀⠀⠀⠀⠙⠀⠀⠀⠀⠀⠒⠒⠒⠊⠀⠀⠀⠀⠀⠀⠀⣰⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀$(Color_yellow)⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣤⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠏$(Color_yellow)⠈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠎⢀⣶$(Color_yellow)⠀⡟⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⢸⣄⣀⣀⣤⠤⠒⢻⠀⠀⢐⡿⠞⢁⡏⣠$(Color_yellow)⡇⠀⣀⣄⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠈⠉⠀⠀⠀⠀⠀⢸⠀⠀⢀⣠⠀⣸⡟⢻$(Color_yellow)⡇⢠⡿⠟⠙⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⢸⣠⠴⠋⢹⠀⣨⡇⠛$(Color_yellow)⣇⠋⢧⠀⠀⢳⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠀⢸⡼⢻⣷⠞$(Color_yellow)⢻⣄⠘⡄⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_blue)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠁⠀⠀$(Color_yellow)⠙⢦⣙⣄⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠓⠒⠒⠛⠉⠉⠑⢲⡤⠀⣄⡠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⠀⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢧⣀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_yellow)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "$(Color_red)██████╗ ██╗██╗  ██╗ █████╗  ██████╗██╗  ██╗██╗   ██╗"
	@echo "$(Color_red)██╔══██╗██║██║ ██╔╝██╔══██╗██╔════╝██║  ██║██║   ██║"
	@echo "$(Color_red)██████╔╝██║█████╔╝ ███████║██║     ███████║██║   ██║"
	@echo "$(Color_red)██╔═══╝ ██║██╔═██╗ ██╔══██║██║     ██╔══██║██║   ██║"
	@echo "$(Color_red)██║     ██║██║  ██╗██║  ██║╚██████╗██║  ██║╚██████╔╝"
	@echo "$(Color_red)╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝ ╚═════╝B̷u̷r̷a̷k̷ ̷Y̷I̷L̷D̷I̷R̷I̷M̷"

.PHONY: all clean fclean re
# .PHONY kuralı ile belirtilen kuralın dosya olmadığını belirtir.
