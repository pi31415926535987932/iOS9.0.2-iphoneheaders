/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BEAppearanceViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol BKAppearanceViewControllerDelegate;
@class BKAppearanceFontViewController, NSArray, UIButton, UILabel, UIView, UISwitch, NSString, AEBookInfo, ContentStyle;

@interface BKAppearanceViewController : BEAppearanceViewController <UITableViewDelegate, UITableViewDataSource> {

	BKAppearanceFontViewController* _fontVC;
	NSArray* _currentItems;
	UIButton* _themeWhiteButton;
	UIButton* _themeSepiaButton;
	UIButton* _themeGrayButton;
	UIButton* _themeNightButton;
	UILabel* _themeWhiteLabel;
	UILabel* _themeSepiaLabel;
	UILabel* _themeGrayLabel;
	UILabel* _themeNightLabel;
	UIView* _themeContainer;
	UIView* _topThemeHairline;
	UIView* _bottomThemeHairline;
	NSArray* _fonts;
	UISwitch* _autoNightModeSwitch;
	char _shownCannotDownloadFontAlert;
	char _shouldShowTransliterateButton;
	UIButton* _transliterateButton;
	NSString* _languageCode;
	char _isTransliterated;
	id<BKAppearanceViewControllerDelegate> _delegate;
	AEBookInfo* _book;
	ContentStyle* _style;
	unsigned _layout;
	int _appearanceStyle;

}

@property (assign,nonatomic) id<BKAppearanceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AEBookInfo * book;                                            //@synthesize book=_book - In the implementation block
@property (assign,nonatomic) unsigned layout;                                              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) int appearanceStyle;                                          //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (nonatomic,retain) ContentStyle * style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSArray * currentItems;                                       //@synthesize currentItems=_currentItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_fontSizeToSegmentIndex:(float)arg1 ;
-(void)releaseViews;
-(void)_changeAppearanceStyle:(int)arg1 ;
-(void)increaseFontSize:(id)arg1 ;
-(void)decreaseFontSize:(id)arg1 ;
-(AEBookInfo *)book;
-(void)setBook:(AEBookInfo *)arg1 ;
-(void)enableAutoNightModeSwitch;
-(void)contentLanguageCodeMayHaveChanged;
-(void)_setPopoverScrolling;
-(char)_shouldShowAutoNightMode;
-(char)showThemeLabels;
-(void)stylizeForTheme;
-(id)_whiteThemeButtonImageSelected:(char)arg1 ;
-(void)setThemeNormal:(id)arg1 ;
-(id)_sepiaThemeButtonImageSelected:(char)arg1 ;
-(void)setThemeSepia:(id)arg1 ;
-(id)_grayThemeButtonImageSelected:(char)arg1 ;
-(void)setThemeGray:(id)arg1 ;
-(id)_nightThemeButtonImageSelected:(char)arg1 ;
-(void)setThemeNight:(id)arg1 ;
-(void)updateThemeButtons;
-(void)handleAutoNightModeSwitch:(id)arg1 ;
-(id)transliterateButton;
-(id)themeContainer;
-(id)autoNightModeSwitch;
-(void)transliterateScript;
-(void)_restoreAutoNightModeSwitch;
-(void)_turnAutoNightModeSwitchOff;
-(void)disableAutoNightModeSwitch;
-(void)fontSizeModifiedByOffset:(float)arg1 ;
-(void)lineHeightModifiedByOffset:(float)arg1 ;
-(void)_notifyDelegateAboutLayoutChange;
-(id)_themeButtonImageWithColor:(id)arg1 selected:(char)arg2 ;
-(char)advancedFonts;
-(void)changeFontSize:(id)arg1 ;
-(void)changeLineHeight:(id)arg1 ;
-(int)maxVisibleFonts;
-(void)changeLegibility:(id)arg1 ;
-(void)onScrollSwitch:(id)arg1 ;
-(NSArray *)currentItems;
-(void)setDelegate:(id<BKAppearanceViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<BKAppearanceViewControllerDelegate>)delegate;
-(CGSize)contentSize;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(ContentStyle *)style;
-(void)setStyle:(ContentStyle *)arg1 ;
-(unsigned)layout;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setLayout:(unsigned)arg1 ;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(void)updateUI;
-(void)loadFonts;
-(void)setAppearanceStyle:(int)arg1 ;
-(int)appearanceStyle;
-(void)setFonts:(id)arg1 ;
-(void)setTheme:(id)arg1 ;
-(id)fonts;
@end
