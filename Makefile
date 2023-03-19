# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 13:27:29 by ktunchar          #+#    #+#              #
#    Updated: 2023/03/20 00:00:36 by ktunchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra -g

LIBS_FLAG = -LLibs -lft -lftprintf 

SRCS = push_swap.c ps_stack.c ps_intruction.c ps_intruction_utils.c ps_insert_sort.c ps_sort3.c ps_sort5.c

OBJS = $(SRCS:.c=.o)

#ARG = 1 4 5  3 2
#100
#ARG = 53 87 86 52 51 38 59 79 63 29 65 17 42 24 20 6 99 90 4 9 1 56 98 45 7 47 50 21 2 74 57 33 77 93 88 61 75 80 25 58 11 62 36 8 64 32 10 70 23 73 91 31 49 28 34 3 55 44 22 96 68 39 83 48 5 41 26 89 94 60 19 92 46 100 82 81 97 78 85 95 76 13 37 30 43 12 27 40 84 35 15 71 67 54 69 16 18 66 14 72

#500
#ARG = 225 488 272 74 19 323 461 14 312 485 319 201 472 464 123 13 43 198 303 221 18 301 459 213 24 486 209 285 147 64 199 496 386 411 107 207 185 306 175 230 337 471 82 29 236 252 466 241 112 344 309 168 405 130 217 443 420 357 428 12 95 194 489 339 302 79 410 269 120 292 407 202 53 359 133 391 208 20 384 205 389 215 177 110 161 113 350 47 465 138 214 211 256 346 164 224 355 67 9 172 372 478 162 189 136 231 87 442 70 2 424 153 388 457 8 119 245 304 340 1 300 427 94 463 493 475 108 148 276 258 210 257 282 414 345 92 421 398 78 451 81 196 382 91 467 63 321 137 452 470 368 412 150 375 419 416 48 265 115 261 114 297 347 60 192 106 187 395 152 42 141 27 17 365 226 16 83 353 23 32 15 458 62 364 39 124 111 402 193 121 326 440 254 85 173 273 248 331 307 206 446 127 49 492 271 99 6 422 264 322 140 101 310 263 342 72 247 343 259 181 75 408 77 203 325 159 278 22 376 494 195 327 54 10 418 453 266 349 36 280 367 239 154 243 379 490 250 362 477 180 244 335 275 50 176 315 454 65 222 216 491 396 157 298 188 146 313 374 436 283 473 240 268 413 186 371 61 392 336 447 483 88 500 165 69 33 456 480 482 55 89 401 262 117 476 31 499 25 423 255 156 281 218 105 232 377 338 86 311 378 441 144 341 253 308 460 479 348 179 134 160 406 431 73 270 444 260 363 11 448 320 432 417 380 462 93 293 328 445 267 151 38 438 145 182 149 212 295 400 385 229 142 318 174 361 352 220 498 439 131 246 497 45 399 129 381 163 166 358 139 393 237 227 219 4 96 103 474 274 104 242 178 143 56 426 21 35 40 158 356 468 314 170 415 484 289 429 251 190 171 28 291 90 66 125 425 481 299 387 51 397 233 277 204 404 135 98 469 360 59 332 228 437 434 334 126 30 394 329 449 366 305 76 5 296 26 403 238 183 200 37 430 235 52 57 435 390 450 169 287 102 354 324 71 351 184 128 118 284 122 290 409 46 433 369 3 455 80 191 167 223 68 383 84 58 100 116 41 286 373 34 317 132 197 44 294 333 487 234 316 249 155 330 279 495 288 109 7 97 370
#ARG = 5 4 3 1 2


all: $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LIBS_FLAG) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run:
	./push_swap $(ARG)

.PHONY: clean fclean all re
