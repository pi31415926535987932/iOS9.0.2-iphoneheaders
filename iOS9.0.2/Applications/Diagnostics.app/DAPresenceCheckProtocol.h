/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSMutableDictionary;


@protocol DAPresenceCheckProtocol <NSObject>
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSMutableDictionary * data; 
@property (nonatomic,readonly) NSString * serialNumber; 
@required
-(id)checkPresence;
-(char)isValidIdentifier:(id)arg1;
-(NSString *)identifier;
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSMutableDictionary *)data;
-(void)setData:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(NSString *)serialNumber;

@end

