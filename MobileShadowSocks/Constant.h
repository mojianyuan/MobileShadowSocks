//
//  Constant.h
//  MobileShadowSocks
//
//  Created by Linus Yang on 13-3-5.
//  Copyright (c) 2013 Linus Yang. All rights reserved.
//

#ifndef MobileShadowSocks_Constant_h
#define MobileShadowSocks_Constant_h

#define APP_VER @"0.2.1"
#define APP_BUILD @"1"

#define CELL_TEXT @"TextField"
#define CELL_PASS @"Pass"
#define CELL_NUM @"Num"
#define CELL_SWITCH @"Switch"
#define CELL_ALWAYS @"Always"


#define LAUNCH_CTL @"/bin/launchctl"
#define SC_UTIL @"/usr/sbin/scutil"
#define SC_IDENTI @"show com.apple.network.identification"

#define DAEMON_ID @"com.linusyang.shadowsocks"
#define BUNDLE_PATH @"/Applications/MobileShadowSocks.app"
#define SHADOW_BIN BUNDLE_PATH @"/shadow"
#define DEFAULT_PAC BUNDLE_PATH @"/auto.pac"
#define PREF_FILE @"/var/mobile/Library/Preferences/com.linusyang.MobileShadowSocks.plist"

#define LOCAL_PORT 1983
#define PAC_PORT 1993
#define BUFF_SIZE 1024
#define EMPTY_PAC "function FindProxyForURL(url, host) \n{\n  return 'SOCKS 127.0.0.1:%d';\n}\n"
#define HTTP_RESPONSE "HTTP/1.1 200 OK\nServer: Pac HTTP Server\nContent-Type: text/plain\n\n"

#endif
