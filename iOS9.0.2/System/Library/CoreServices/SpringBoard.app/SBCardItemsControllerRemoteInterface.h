/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBCardItemsControllerRemoteInterface <NSObject>
@required
-(void)cardItemsDidChange:(id)arg1 forControllerWithIdentifier:(id)arg2;
-(void)addCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
-(void)removeCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
-(void)setCardItems:(id)arg1 forControllerWithIdentifier:(id)arg2;
-(void)clearCardItemsForControllerWithIdentifier:(id)arg1;
-(void)getCardItemsForControllerWithIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2;

@end

