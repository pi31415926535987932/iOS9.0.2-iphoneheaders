/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class FMFFriendRequest, NSLayoutConstraint, UIButton, UILabel, UIView, UIImageView, CNAvatarView, NSString;

@interface RequestTableViewCell : UITableViewCell <CNAvatarViewDelegate> {

	char _isRegisteredForPreview;
	FMFFriendRequest* _request;
	NSLayoutConstraint* _lineHeightConstraint;
	UIButton* _acceptButton;
	UIButton* _declineButton;
	UILabel* _friendNameLabel;
	UIView* _avatarViewContainer;
	UIImageView* _chevron;
	UILabel* _subtitleLabel;
	UIView* _lineView;
	CNAvatarView* _avatarView;

}

@property (assign,nonatomic) char isRegisteredForPreview;                            //@synthesize isRegisteredForPreview=_isRegisteredForPreview - In the implementation block
@property (nonatomic,retain) FMFFriendRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lineHeightConstraint;              //@synthesize lineHeightConstraint=_lineHeightConstraint - In the implementation block
@property (nonatomic,retain) UIButton * acceptButton;                                //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIButton * declineButton;                               //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,retain) UILabel * friendNameLabel;                              //@synthesize friendNameLabel=_friendNameLabel - In the implementation block
@property (nonatomic,retain) UIView * avatarViewContainer;                           //@synthesize avatarViewContainer=_avatarViewContainer - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                                  //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                      //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                              //@synthesize avatarView=_avatarView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)avatarViewContainer;
-(UILabel *)friendNameLabel;
-(void)refreshCellData;
-(char)isRegisteredForPreview;
-(void)setIsRegisteredForPreview:(char)arg1 ;
-(void)setAvatarViewContainer:(UIView *)arg1 ;
-(void)setFriendNameLabel:(UILabel *)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(NSLayoutConstraint *)lineHeightConstraint;
-(void)setLineHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)acceptButtonTapped:(id)arg1 ;
-(void)declineButtonTapped:(id)arg1 ;
-(FMFFriendRequest *)request;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(UIView *)lineView;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(char)shouldShowActionsForAvatarView:(id)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(UIButton *)acceptButton;
-(void)setAcceptButton:(UIButton *)arg1 ;
-(UIButton *)declineButton;
-(void)setDeclineButton:(UIButton *)arg1 ;
-(void)setRequest:(FMFFriendRequest *)arg1 ;
@end

