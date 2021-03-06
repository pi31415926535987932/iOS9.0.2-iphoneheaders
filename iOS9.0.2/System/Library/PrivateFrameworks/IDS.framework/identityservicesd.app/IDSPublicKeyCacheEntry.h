/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface IDSPublicKeyCacheEntry : NSObject {

	NSString* _fromURI;
	NSString* _forURI;
	NSString* _forService;
	NSMutableDictionary* _map;

}

@property (nonatomic,copy) NSString * forService;                    //@synthesize forService=_forService - In the implementation block
@property (nonatomic,copy) NSString * fromURI;                       //@synthesize fromURI=_fromURI - In the implementation block
@property (nonatomic,copy) NSString * forURI;                        //@synthesize forURI=_forURI - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * map;              //@synthesize map=_map - In the implementation block
-(NSString *)fromURI;
-(void)setFromURI:(NSString *)arg1 ;
-(NSString *)forURI;
-(void)setForURI:(NSString *)arg1 ;
-(NSString *)forService;
-(void)setForService:(NSString *)arg1 ;
-(void)dealloc;
-(void)setMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)map;
@end

