/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ACAccount, ACAccountStore, ALAssetsLibrary, SLFacebookAlbumChooserViewController, SLFacebookAlbumManager, SLFacebookPlaceManager, SLFacebookPost, SLFacebookPostPrivacyManager, SLFacebookSession, SLFacebookVideoOptionsViewController, SLSheetAction, SLSheetPlaceViewController, SLVideoQualityOption, UIViewController<SLFacebookAudienceViewController>;

@interface SLFacebookComposeViewController : SLComposeServiceViewController <SLPlaceDataSourceDelegate, SLSheetPlaceViewControllerDelegate, SLFacebookAudienceViewControllerDelegate, SLFacebookAlbumChooserViewControllerDelegate, SLFacebookVideoOptionsDelegate> {
    struct { 
        unsigned int showAlbumAction : 1; 
        unsigned int showPrivacyAction : 1; 
        unsigned int showPlaceAction : 1; 
        unsigned int showVideoDetailAction : 1; 
    ACAccountStore *_accountStore;
    } _actionFlags;
    SLFacebookAlbumChooserViewController *_albumChooserViewController;
    SLFacebookAlbumManager *_albumManager;
    SLSheetAction *_albumSheetAction;
    ALAssetsLibrary *_assetsLibrary;
    UIViewController<SLFacebookAudienceViewController> *_audienceViewController;
    id _completionHandler;
    BOOL _hasAccessToAccount;
    BOOL _hasCheckedAccess;
    BOOL _hasShowedLocationDeniedAlert;
    SLFacebookPlaceManager *_placeManager;
    SLSheetAction *_placeSheetAction;
    SLSheetPlaceViewController *_placeViewController;
    SLFacebookPost *_post;
    SLFacebookPostPrivacyManager *_postPrivacyManager;
    SLSheetAction *_privacySheetAction;
    SLVideoQualityOption *_selectedVideoQualityOption;
    SLFacebookSession *_session;
    SLSheetAction *_videoOptionsAction;
    SLFacebookVideoOptionsViewController *_videoOptionsViewController;
    BOOL _wasPresented;
}

@property(retain) ACAccountStore * accountStore;
@property(copy) id completionHandler;
@property(readonly) ACAccount * privilegedAccount;

+ (id)serviceBundle;

- (void).cxx_destruct;
- (id)_albumSheetAction;
- (void)_handlePostPrivacyResultWithSuccess:(BOOL)arg1 error:(id)arg2;
- (BOOL)_isLocationAuthorizationDenied;
- (id)_placeSheetAction;
- (void)_presentAlbumViewController;
- (void)_presentAudienceViewController;
- (void)_presentFacebookDisabledAlert;
- (void)_presentNoAccountsAlert;
- (void)_presentPlaceViewController;
- (void)_presentVideoOptionsViewController;
- (id)_privacySheetAction;
- (void)_setPlace:(id)arg1;
- (void)_setVideoSizeOptionIdentifier:(id)arg1;
- (void)_updateAudienceButtonForPrivacySettingType:(int)arg1 name:(id)arg2;
- (id)_videoOptionIdentifer;
- (id)_videoOptionsAction;
- (id)_videoQualityOption;
- (id)accountStore;
- (void)albumChooserViewController:(id)arg1 didSelectAlbum:(id)arg2;
- (id)albumManager;
- (void)audienceViewController:(id)arg1 didSelectPostPrivacySetting:(id)arg2;
- (void)callCompletionHandlerWithResult:(int)arg1;
- (BOOL)canPost;
- (id)completionHandler;
- (void)createPreviewIfNeeded;
- (void)didReceiveMemoryWarning;
- (void)handleImagePostWithURL;
- (BOOL)hasAccountAccess;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (void)placeViewController:(id)arg1 didSelectPlace:(id)arg2;
- (id)privilegedAccount;
- (void)send;
- (void)setAccountStore:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setupCommonUI;
- (id)sheetActions;
- (void)sheetPresentationAnimationDidFinish;
- (BOOL)validateText:(id)arg1;
- (void)videoOptionsViewController:(id)arg1 didSelectVideoQualityOption:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end