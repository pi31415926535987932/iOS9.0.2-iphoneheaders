/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface MFTableViewCell : UITableViewCell {

	UIColor* _savedTextColor;
	char _shouldDisableWhileEditing;

}

@property (nonatomic,readonly) float accessoryWidth; 
@property (assign,nonatomic) char disabled; 
@property (assign,nonatomic) char shouldDisableWhileEditing;              //@synthesize shouldDisableWhileEditing=_shouldDisableWhileEditing - In the implementation block
+(float)defaultAccessoryWidth;
+(float)reorderingAccessoryWidth;
-(void)dealloc;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned)arg1 ;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(void)setShouldDisableWhileEditing:(char)arg1 ;
-(char)shouldDisableWhileEditing;
-(float)accessoryWidth;
@end

