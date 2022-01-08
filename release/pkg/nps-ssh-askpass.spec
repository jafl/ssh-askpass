Summary: nps-ssh-askpass provides a cross-platform user interface for SSH to ask for a password.
Name: %app_name
Version: %pkg_version
Release: 1
License: GPL
Group: Utilities
Source: %pkg_name
Requires: libX11, libXinerama, libXpm, libXft, libxml2, gd, libjpeg, libpng, libicu, pcre

%description
nps-ssh-askpass provides a cross-platform user interface for SSH
to ask for a password.

%prep
%setup

%install

%define askpass_doc_dir /usr/share/doc/nps-ssh-askpass

./install "$RPM_BUILD_ROOT"/usr

%files

%docdir %askpass_doc_dir

/usr/bin/nps-ssh-askpass
%askpass_doc_dir
