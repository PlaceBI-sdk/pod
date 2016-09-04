//
//  WoorldsSDK.h
//  Pods
//
//  Created by Yehonatan Levi on 1/13/15.
//
//

#ifndef Pods_WoorldsSDK_h
#define Pods_WoorldsSDK_h

#import <CoreLocation/CoreLocation.h>

@interface WoorldsSDK : NSObject <CLLocationManagerDelegate>
- (id) init;

+ (instancetype)sharedInstance;

- (NSArray*)getSegmentation:(NSString*)campaignId;
- (NSString*)getCampaign;
- (NSArray*)getPlaces;

- (void)identify:(NSString *)identity;
- (void)trackDownload:(NSString*)campaignId;
- (void)trackInstall:(NSString*)campaignId;
- (void)trackClick:(NSString*)campaignId;
- (void)trackAction:(NSString*)campaignId;
- (void)track:(NSString*)name withData:(NSDictionary*)data;
- (void)trackAppState:(BOOL*)state;
- (void)processLaunchOptions:(NSDictionary*)launchOptions;
- (void)setNotificationsEnabled:(BOOL)enabled;
- (BOOL)getNotificationsEnabled;
- (void)startSdk;
- (void)stopSdk;
- (void)enterWoorlds;

- (void)processUserInfo:(NSDictionary*) userInfo;

- (void)setLogEnabled:(BOOL) enabled;
- (NSString*)logBuffer;
- (void)resetLog;

- (void)emptyFindRefind;
- (void)showLoginData;

- (void)setServer:(NSString*)server;
- (NSString*)getServer;

- (void)clearCookies;

@end

#endif
