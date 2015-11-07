/*
* This header is generated by classdump-dyld 0.7
* on Sunday, October 25, 2015 at 6:40:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray, NSURL;


@protocol SearchUIActionButtonItem <NSObject>
@property (nonatomic,readonly) unsigned actionType; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,readonly) char isOverlay; 
@property (nonatomic,readonly) NSArray * adamIDs; 
@property (nonatomic,readonly) char requiresLocalMedia; 
@property (nonatomic,copy,readonly) NSString * labelForLocalMedia; 
@property (nonatomic,copy,readonly) NSString * localMediaIdentifier; 
@property (nonatomic,readonly) NSURL * punchoutURL; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
@optional
-(NSArray *)adamIDs;
-(NSString *)localMediaIdentifier;
-(NSURL *)punchoutURL;
-(char)requiresLocalMedia;
-(NSString *)labelForLocalMedia;
-(NSString *)bundleID;
-(NSString *)contactIdentifier;

@required
-(unsigned)actionType;
-(NSString *)label;
-(char)isOverlay;

@end
