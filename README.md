# VPN Profile Manager
This tool is designed to manage VPN profiles, especially in systems, where you manage
VPN profiles through `NetworkManager`. The actual intent of this tool is to make the
choosing of VPNs much easier, since... let's say, you have work VPNs, but you also load
in Surfshark VPNs because the AUR package of Surfshark decided to bitch around again.
Now you have a bloat-ass list. If you're not on KDE, good luck finding the work VPNs
again. This tool is meant to be able to group up those profiles, so that you don't have
to search through your long VPN lists again.

(questioning myself, why I named it "VPN Profile Manager", and not "VPN Grouping
Manager")

---

## Temporary Archival
Considering my recent movements into closed-source development, I am temporarily
archiving this project. It is mainly to refocus and switch the active priorities, as
managing a thousand projects gets tiring. I already got OsintgramCXX over here, along
with AnlinxOS, tDEX, OpenMDJ, VPN Profile Manager and many others too. Another reason is
to slow the hype down because I strongly believe that I may or may not have overhyped my
own projects that I have listed. This also includes another dead project of mine,
[aboawt](https://github.com/BC100Dev/aboawt). Anyway, right now, I will be focusing on
developing [novihook.net](https://novihook.net) (don't worry about the certificates, I
will deal with them on the public release, considering that Plesk decided to bitch around
with their own certificates. Damn 💀). Novihook will end up being a better Webhook
service. This shared notice will be put on all the relevant / active repos that I deem
to be in the priorities.

Not all hope is lost. Once I get Novihook finished, along with another desktop app into
commercial use (in an attempt to make some money), I will unarchive these repos. However,
in order to keep my focus alive, I will be making polls, as to what you guys think I
should focus on first after the first two (Novihook, I.T.) gets released. Basically,
instead of battling up multiple repos and trying to get the primary focus on, I will
progress into making the first one and make a public release. I would assume that
considering the amount of stars on LXEB, y'all probably want me to finish LXEB first
before the others.

Up until then... let's cook! 😎

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
- Habibi VPN

Now, this can be grouped together, making it something that looks like this:

- Work VPN
  - some_company_name_VPN1
  - some_company_name_VPN2
- Surfshark VPN
  - jp-tok.prod.surfshark.com_udp
  - us-dal.prod.surfshark.com_udp
  - us-tas.prod.surfshark.com_udp
- Personal VPN
  - Habibi VPN

This looks much better, wouldn't it? A solution like this, is actually a proper
problem-solving mechanism.

---

## Use Cases
You can use this tool in two ways: using the `vpn-prof-manager` as a CLI tool,
which I thought about making this entire thing an easy to use (at least I hope so),
and a GUI, for those that aren't too fond of the CLI... especially the newcomers to 
Linux too, which... knowing people, not everyone is fond of the damn Terminal anyway.

This tool will start to target primarily for Arch Linux users, slowly expanding it
to Ubuntu and other Linux systems that may or may not use `NetworkManager`,
and eventually Windows 10 & 11. Sorry macOS users, I don't have a MacBook to
compile this tool with. Unless, for you macOS users, `wine` might be your best bet.
That is, once I finish the Windows port for it.

---

## Documentation Notice
Now, this README obviously isn't finished yet because the tool is still in early stages
(Chris, why tf are you lazy 😭). What I can say is that this tool is designed
primarily for people that import every single VPN through `NetworkManager` itself.

What I can promise with this tool that it will be a good project... if I end up finally
start development on it because goddamn, I left a project out that could have been a
good one.