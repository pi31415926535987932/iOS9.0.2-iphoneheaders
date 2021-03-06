/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSArray;

@interface ASChangedFolderStore : ASItem {

	NSNumber* _status;
	NSString* _syncKey;
	NSArray* _updatedFolders;

}

@property (nonatomic,retain) NSNumber * status;                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * syncKey;                    //@synthesize syncKey=_syncKey - In the implementation block
@property (nonatomic,retain) NSArray * updatedFolders;              //@synthesize updatedFolders=_updatedFolders - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSArray *)updatedFolders;
-(void)setUpdatedFolders:(NSArray *)arg1 ;
-(void)setSyncKey:(NSString *)arg1 ;
-(NSString *)syncKey;
@end

