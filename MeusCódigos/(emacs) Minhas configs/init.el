;---------------------------------------------
;     __  _______  ____  ___   ___________
;    /  |/  / __ \/ __ \/   | / ____/ ___/
;   / /|_/ / / / / /_/ / /| |/ /    \__ \ 
;  / /  / / /_/ / ____/ ___ / /___ ___/ / 
; /_/  /_/\____/_/   /_/  |_\____//____/  
;
;---------------------------------------------

;-----------------------------
;     Parâmetro Globais
;-----------------------------

(defvar *my-font* "firacode"
  "My current font")

;-----------------------------
;      Custom keybinds
;-----------------------------

;> Enlarge and Shrink windows
(global-set-key (kbd "C-<tab>") 'other-window)
(global-set-key (kbd "M-<down>") 'enlarge-window)
(global-set-key (kbd "M-<up>") 'shrink-window)
(global-set-key (kbd "M-<left>") 'shrink-window-horizontally)
(global-set-key (kbd "M-<right>") 'enlarge-window-horizontally)

;> Toggle fly checker
(global-set-key (kbd "C-'") 'global-flycheck-mode)

;-----------------------------
;     Cleaning EMACS GUI
;-----------------------------

;> Remove startup message
(setq inhibit-startup-message t)

;> Remove menu bar
(tool-bar-mode -1)
(menu-bar-mode -1)

;> Remove scroll bar
(scroll-bar-mode -1)

;> Add line numbers
(global-display-line-numbers-mode)					;

;> Adjust font size
(set-face-attribute 'default nil :height 220)

;> Desativar bell
(setq visible-bell t)

;-----------------------------
;    Packages configuration
;-----------------------------

;> Use-package
(require 'package)
(setq package-enable-at-startup nil) ;> Desabilitar ativação da pacotes

;> Add MELPA repository
(add-to-list 'package-archives
			 '("melpa" . "https://melpa.org/packages/"))

(unless (package-installed-p 'use-package)
  (package-refresh-contents)
  (package-install 'use-package))

;> Package for try other packages
(use-package try
 :ensure t)

;> Key help
(use-package which-key
 :ensure t
 :config
 (progn
   (which-key-mode)
   (which-key-setup-side-window-right)
 ))

;> Auto-complete package
(use-package auto-complete
 :ensure t
 :init
 (progn
   (ac-config-default)
   (global-auto-complete-mode t)
 ))

;> Icons for neotree package
(use-package all-the-icons
 :ensure t)

;> File tree package
(use-package neotree
  :ensure t
  :config (setq neo-theme (if (display-graphic-p) 'icons 'arrow))
  :bind (("C-\\" . 'neotree-toggle)))

;> Change window more quick
(use-package ace-window
  :ensure t
  :bind (("C-x o" . ace-window)))

;> Sintax checker
(use-package flycheck
 :ensure t
 :init (global-flycheck-mode t))

;> Vi tilde
(use-package vi-tilde-fringe
  :ensure t
  :init (global-vi-tilde-fringe-mode t))

;-----------------
;      Themes
;-----------------

(use-package doom-themes
  :ensure t
  :config
  ;; Global settings (defaults)
  (setq doom-themes-enable-bold t    ; if nil, bold is universally disabled
        doom-themes-enable-italic t) ; if nil, italics is universally disabled
  (load-theme 'doom-one t)
  
  ;; Enable flashing mode-line on errors
  (doom-themes-visual-bell-config)
  ;; Enable custom neotree theme (all-the-icons must be installed!)
  (doom-themes-neotree-config)
  ;; Corrects (and improves) org-mode's native fontification.
  (doom-themes-org-config))

;> Modeline theme
(use-package doom-modeline
  :ensure t
  :init (doom-modeline-mode 1))
 ; :config
 ; (progn (setq doom-modeline-height 2)
 ;	 (setq doom-modeline-bar-width 3)))

;> Firacode "lignatures
(use-package fira-code-mode
  :hook prog-mode
  :config (progn
           (global-fira-code-mode)
           (fira-code-mode-set-font)))

;> Firacode font
(set-face-attribute 'default nil :font *my-font*)
(set-frame-font *my-font* nil t)

;;--------------
;;     EVIL
;;--------------

;; Vim style undo
(use-package undo-tree
  :ensure t
  :after evil
  :diminish
  :config
  (evil-set-undo-system 'undo-tree)
  (global-undo-tree-mode 1))

;;; Vim Bindings
(use-package evil
  :ensure t
  :demand t
  :bind (("<escape>" . keyboard-escape-quit))
  :init
  ;; allows for using cgn
  ;; (setq evil-search-module 'evil-search)
  (setq evil-want-keybinding nil)
  ;; no vim insert bindings
  (setq evil-undo-system 'undo-fu)
  :config
  (evil-mode 1))

;;; Vim Bindings Everywhere else
(use-package evil-collection
  :ensure t
  :after evil
  :config
  (setq evil-want-integration t)
  (evil-collection-init))

;-----------------------------
;      Melpa Configs
;-----------------------------

(package-initialize) ;> Inicia pacotes
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(ispell-dictionary nil)
 '(package-selected-packages '(doom-modeline atom-one-dark-theme try use-package)))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )
