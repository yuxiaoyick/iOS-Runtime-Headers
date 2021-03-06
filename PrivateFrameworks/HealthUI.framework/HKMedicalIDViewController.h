/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDViewController : HKViewController <HKEmergencyCardDeletionDelegate, HKEmergencyCardLastUpdatedTableItemDelegate, HKEmergencyCardRowHeightChangeDelegate, HKMedicalIDViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _accumulatedNumberOfRowsForItems;
    BOOL  _allowsEditing;
    HKEmergencyCardContactsTableItem * _contactsItem;
    <HKMedicalIDViewControllerDelegate> * _delegate;
    NSArray * _footers;
    HKEmergencyCardGroupTableItem * _groupItem;
    HKHealthStore * _healthStore;
    BOOL  _inBuddy;
    BOOL  _inEditMode;
    NSArray * _localeItems;
    _HKMedicalIDData * _medicalID;
    HKEmergencyCardNameAndPictureTableItem * _nameAndPictureItem;
    NSArray * _organDonationItems;
    BOOL  _organDonationSignupAvailable;
    NSArray * _presentableTableItems;
    BOOL  _showsDeleteButton;
    BOOL  _showsDismissButton;
    NSArray * _tableItems;
    UITableView * _tableView;
    int  _tableViewStyle;
}

@property (nonatomic) BOOL allowsEditing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKMedicalIDViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) _HKMedicalIDData *medicalID;
@property (nonatomic) BOOL showsDeleteButton;
@property (nonatomic) BOOL showsDismissButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (BOOL)isSupportedOnThisDevice;

- (void).cxx_destruct;
- (void)_adjustTableViewContentOffsetForVisibleView:(id)arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 animated:(BOOL)arg3;
- (void)_buildPresentableTableItems;
- (void)_buildTableItems;
- (void)_cancelEditingTapped:(id)arg1;
- (void)_contactStoreDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_doneEditingTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (void)_editTapped:(id)arg1;
- (BOOL)_editable;
- (id)_fetchMedicalIDDataSynchronously:(BOOL*)arg1;
- (void)_fetchName;
- (void)_keyboardFrameWillChange:(id)arg1;
- (id)_newViewForFooterInSection:(int)arg1;
- (void)_nextButtonTapped:(id)arg1;
- (void)_organDonationTapped:(id)arg1;
- (int)_preferredOrganDonationOrganization;
- (void)_refreshEmergencyContactsAndReload:(BOOL)arg1;
- (int)_rowIndexForTableItem:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)_shouldShowOrganDonation;
- (id)_tableItemForIndexPath:(id)arg1;
- (void)_updateMedicalIDNameWithDemographicsInformation:(id)arg1;
- (BOOL)allowsEditing;
- (void)dealloc;
- (id)delegate;
- (void)deletionTableItemDidTapDelete:(id)arg1;
- (id)healthStore;
- (id)initInEditMode:(BOOL)arg1;
- (id)initInEditMode:(BOOL)arg1 inBuddy:(BOOL)arg2 organDonationSignupAvailable:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)lastUpdatedTableItemDidTapEditButton:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (id)medicalID;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)preferredStatusBarStyle;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMedicalID:(id)arg1;
- (void)setShowsDeleteButton:(BOOL)arg1;
- (void)setShowsDismissButton:(BOOL)arg1;
- (void)setTableView:(id)arg1;
- (BOOL)showsDeleteButton;
- (BOOL)showsDismissButton;
- (unsigned int)supportedInterfaceOrientations;
- (void)tableItem:(id)arg1 heightDidChangeForRowIndex:(int)arg2 keepRectVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (void)tableItemDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (void)tableItemDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3;
- (id)tableView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)timeZoneDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
