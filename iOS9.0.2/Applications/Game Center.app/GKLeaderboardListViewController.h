/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKBasicCollectionViewController.h>

@class GKLeaderboardSet, GKGameRecord, GKPlayer;

@interface GKLeaderboardListViewController : GKBasicCollectionViewController {

	GKLeaderboardSet* _leaderboardSet;
	GKGameRecord* _game;
	GKPlayer* _player;

}

@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;              //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) GKGameRecord * game;                            //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                              //@synthesize player=_player - In the implementation block
-(id)initWithLeaderboardSet:(id)arg1 game:(id)arg2 player:(id)arg3 ;
-(id)initWithGame:(id)arg1 player:(id)arg2 ;
-(GKLeaderboardSet *)leaderboardSet;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(void)showLeaderboard:(id)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(void)dealloc;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)title;
-(void)configureDataSource;
-(void)didEnterNoContentState;
-(void)updateDynamicColumnCountsForViewSize:(CGSize)arg1 ;
-(void)setGame:(GKGameRecord *)arg1 ;
-(GKGameRecord *)game;
-(char)_gkShouldPushViewControllerInsteadOfUsingPopoverOnCompactWidthPad;
-(id)itemAtIndexPath:(id)arg1 ;
@end
