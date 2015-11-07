/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FindMyFriends/FMFBaseCmd.h>

@class NSString, NSArray;

@interface FMFRefreshCommand : FMFBaseCmd {

	char _isMinCallback;
	char _isMaxCallback;
	NSString* _selectedFriend;
	NSArray* _tapContext;

}

@property (nonatomic,copy) NSString * selectedFriend;              //@synthesize selectedFriend=_selectedFriend - In the implementation block
@property (assign,nonatomic) char isMinCallback;                   //@synthesize isMinCallback=_isMinCallback - In the implementation block
@property (assign,nonatomic) char isMaxCallback;                   //@synthesize isMaxCallback=_isMaxCallback - In the implementation block
@property (nonatomic,retain) NSArray * tapContext;                 //@synthesize tapContext=_tapContext - In the implementation block
-(id)willSucceedNotification;
-(id)willFailNotification;
-(id)didSucceedNotification;
-(char)shouldClearDataContextAndRefreshOnFailure;
-(id)didFailNotification;
-(char)ignoreResponseErrors;
-(id)pathSuffix;
-(NSArray *)tapContext;
-(void)setSelectedFriend:(NSString *)arg1 ;
-(NSString *)selectedFriend;
-(id)initForMinCallback:(char)arg1 ;
-(void)setIsMinCallback:(char)arg1 ;
-(void)setIsMaxCallback:(char)arg1 ;
-(void)setTapContext:(NSArray *)arg1 ;
-(char)isMinCallback;
-(char)isMaxCallback;
-(id)jsonBodyDictionary;
-(id)clientContext;
@end
