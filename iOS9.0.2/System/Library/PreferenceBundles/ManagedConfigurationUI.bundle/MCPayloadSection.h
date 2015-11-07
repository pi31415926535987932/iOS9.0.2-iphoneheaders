/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface MCPayloadSection : NSObject {

	NSString* _sectionTitle;
	NSString* _sectionFooter;
	NSMutableArray* _payloadInfos;

}

@property (nonatomic,retain) NSString * sectionTitle;                    //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) NSString * sectionFooter;                   //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (nonatomic,retain) NSMutableArray * payloadInfos;              //@synthesize payloadInfos=_payloadInfos - In the implementation block
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
-(id)init;
-(id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3 ;
-(NSMutableArray *)payloadInfos;
-(void)setPayloadInfos:(NSMutableArray *)arg1 ;
-(NSString *)sectionFooter;
-(void)setSectionFooter:(NSString *)arg1 ;
@end
