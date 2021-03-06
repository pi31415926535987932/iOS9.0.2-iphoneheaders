/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {

	NSMutableArray* _mSingularResponses;

}

@property (nonatomic,readonly) NSArray * singularResponses; 
@property (nonatomic,retain) NSMutableArray * mSingularResponses;              //@synthesize mSingularResponses=_mSingularResponses - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(NSArray *)singularResponses;
-(void)setMSingularResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mSingularResponses;
-(void)_addSingularResponse:(id)arg1 ;
@end

