/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WFWhitelistSiteBuffer, NSString;

@interface WFWhitelistUserPreferences : NSObject {

	WFWhitelistSiteBuffer* filterWhitelist;
	WFWhitelistSiteBuffer* filterBlacklist;
	WFWhitelistSiteBuffer* webWhitelist;
	char filterEnabled;
	char whitelistEnabled;
	char alwaysAllowHTTPS;
	NSString* username;

}

@property (assign) char filterEnabled; 
@property (assign) char whitelistEnabled; 
@property (assign) char alwaysAllowHTTPS; 
@property (retain) NSString * username; 
@property (readonly) WFWhitelistSiteBuffer * filterWhitelist; 
@property (readonly) WFWhitelistSiteBuffer * filterBlacklist; 
@property (readonly) WFWhitelistSiteBuffer * webWhitelist; 
+(id)metasitesPath;
+(id)_arrayByConvertingLinesInStringsAtPath:(id)arg1 ;
+(id)metasitesExceptionPath;
+(id)_metasiteDomainNamesArray;
+(id)_sharedMetasiteDomainNamesDictionary;
+(id)_sharedMetasiteExceptionsDomainNamesArray;
+(id)preferencesPathForUsername:(id)arg1 ;
+(id)whitelistWithPreferences:(id)arg1 ;
+(id)_modificationDateForFileAtPath:(id)arg1 ;
+(id)_cachedWhitelistForPath:(id)arg1 username:(id)arg2 ;
+(char)_isURLMetasite:(id)arg1 ;
+(id)whitelistForUser:(id)arg1 ;
+(id)defaultWhitelistForUser:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithPreferences:(id)arg1 ;
-(void)setFilterEnabled:(char)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(char)isURLAllowed:(id)arg1 reason:(id*)arg2 shouldFilter:(char*)arg3 foundOnList:(char*)arg4 ;
-(char)isURL:(id)arg1 onList:(id)arg2 ;
-(char)isURLAllowed:(id)arg1 ;
-(id)pronounceOnPageURLString:(id)arg1 shouldFilter:(char*)arg2 ;
-(char)filterEnabled;
-(char)whitelistEnabled;
-(void)setWhitelistEnabled:(char)arg1 ;
-(char)alwaysAllowHTTPS;
-(void)setAlwaysAllowHTTPS:(char)arg1 ;
-(WFWhitelistSiteBuffer *)filterWhitelist;
-(WFWhitelistSiteBuffer *)filterBlacklist;
-(WFWhitelistSiteBuffer *)webWhitelist;
@end
