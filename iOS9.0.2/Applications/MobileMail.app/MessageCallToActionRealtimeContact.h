/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MessageCallToAction.h>

@class NSString, SGRealtimeContact;

@interface MessageCallToActionRealtimeContact : MessageCallToAction {

	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,retain,readonly) SGRealtimeContact * realtimeContact; 
+(id)callToActionForRealtimeContact:(id)arg1 ;
-(SGRealtimeContact *)realtimeContact;
-(id)supplementaryActionTitle;
-(id)primaryActionTitle;
-(id)secondaryActionTitle;
-(void)dealloc;
-(int)compare:(id)arg1 ;
-(id)bundleIdentifier;
-(id)title;
-(id)subtitle;
@end
