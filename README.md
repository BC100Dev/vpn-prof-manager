# VPN Profile Manager
This tool is designed to manage VPN profiles, especially in certain systems that you
want to handle multiple profiles. A good example is, using Surfshark VPN on Arch
Linux, and having a work VPN at the same time. Now, from my experience, the AUR
package doesn't always work, and the developers of Surfshark have a manual way of
adding VPNs to the Arch Linux system. Now, this isn't a bad idea, until you realize
that you have not only your work VPN that may need certain accesses to certain
websites, or websites that may or may not allow the use of bypassing 2FA, but
looking to find your work VPN through all the names that `NetworkManager` (mainly
the GUI people) gives you. Again, you can still avoid using this Profile Manager,
if you find `nmcli` comfortable, but for certain people that just want a direct GUI
access, this tool is just for you.

(questioning myself, why I named it "VPN Profile Manager", and not "VPN Grouping
Manager")

---

## Problem Solvers
This tool provides a solution to these problems, something that VPN configuration
managers don't usually provide. That is, Profile Management that allows you to
properly manage VPNs, as if they are groups of some kind.

Let's say that you have a kind of these VPNs:

- jp-tok.prod.surfshark.com_udp
- some_company_name_VPN1
- some_company_name_VPN2
- us-dal.prod.surfshark.com_udp
- us-tas.prod.surfshark.com_udp

Now, this can be grouped together, making it something that looks like this:

- Work VPN
  - some_company_name_VPN1
  - some_company_name_VPN2
- Surfshark VPN
  - jp-tok.prod.surfshark.com_udp
  - us-dal.prod.surfshark.com_udp
  - us-tas.prod.surfshark.com_udp

This looks much better, wouldn't it? A solution like this, is actually a proper
problem-solving mechanism.

---

## Use Cases
You can use this tool in two ways: using the `vpn-prof-manager` as a CLI tool,
which I thought about making this entire thing an easy to use (at least I hope so),
and a GUI, for those that aren't too fond of the CLI.

This tool will start to target primarily for Arch Linux users, slowly expanding it
to Ubuntu and other Linux systems that may or may not use `NetworkManager`,
and eventually Windows 10 & 11. Sorry macOS users, I don't have a MacBook to
compile this tool with. Unless, for you macOS users, `wine` might be your best bet.
That is, once I finish the Windows port for it.

---

## Building
To build 

---

## Documentation Notice
Now, this README isn't finished yet because this tool is in early stages. What I
can say is that this tool is designed primarily for Arch Linux users only, or more
primarily Linux that makes the use of dependencies like `NetworkManager`, `D-Bus`
and Qt-6. For the installation part, I will make sure that Qt-6 (the GUI framework
I'll be using) will come preloaded, with the use of `RPATH`, giving the ability to
let the executable look for libraries in the designed places first, before the
system library paths.

What I can promise with this tool that it will be a good project.