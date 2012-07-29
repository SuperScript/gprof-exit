
default: \
it.www


attribute.conf: \
attribute.conf.build \
../package/name \
../package/path \
../package/versions
	sh makefile.build attribute.conf.build attribute.conf 

index.html: \
default.html.build \
index.txt \
asciidoc.conf \
webpage.conf \
attribute.conf
	sh makefile.build default.html.build index.html index

install.html: \
default.html.build \
install.txt \
asciidoc.conf \
webpage.conf \
attribute.conf
	sh makefile.build default.html.build install.html install

it: \
default.build \
it=d \
index.html \
install.html \
asciidoc.css
	sh makefile.build default.build it it

it.www: \
default.www.build \
it
	sh makefile.build default.www.build it.www it

mkfile: \
mkfile.build \
mkfile=d \
it
	sh makefile.build mkfile.build mkfile 
