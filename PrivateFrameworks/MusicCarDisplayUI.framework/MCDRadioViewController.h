/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDRadioViewController : MCD_OLD_TableViewController <MCDErrorViewDelegate, MCDRadioContentManagerDelegate, MCDRadioDataSourceDelegate> {
    UIView * _MCD_tableView;
    UIActivityIndicatorView * _activityIndicator;
    unsigned long long  _allStationsIndex;
    id  _currentlyPlayingRadioStation;
    MCDRadioDataSource * _dataSource;
    bool  _didInitiatePlayback;
    NSArray * _featuredStations;
    bool  _featuredStationsFinishedLoading;
    unsigned long long  _featuredStationsIndex;
    MPWeakTimer * _loadingTimer;
    UINavigationController * _nowPlayingNavigationController;
    UIView * _placeholderView;
    MPModelRadioStation * _prominentRadioStation;
    unsigned long long  _prominentStationIndex;
    bool  _radioStationsLoaded;
    NSArray * _recentStations;
    bool  _recentStationsFinishedLoading;
    NSIndexPath * _selectedIndexPath;
    MCD_OLD_TableViewController * _viewController;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) unsigned long long allStationsIndex;
@property (nonatomic, retain) id currentlyPlayingRadioStation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didInitiatePlayback;
@property (nonatomic) bool featuredStationsFinishedLoading;
@property (nonatomic) unsigned long long featuredStationsIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPWeakTimer *loadingTimer;
@property (nonatomic, retain) UINavigationController *nowPlayingNavigationController;
@property (nonatomic) unsigned long long prominentStationIndex;
@property (nonatomic) bool radioStationsLoaded;
@property (nonatomic) bool recentStationsFinishedLoading;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) MCD_OLD_TableViewController *viewController;

+ (bool)currentlyPlayingRadioStationFromStation:(id)arg1 nowPlayingItem:(id)arg2;

- (void).cxx_destruct;
- (void)_categorizeStations;
- (id)_filteredRadioStations:(id)arg1;
- (bool)_isNetworkTypeAllowed:(long long)arg1;
- (void)_itemDidChange;
- (void)_limitedUIDidChange;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_presentStationUnavailableAlertForError:(id)arg1 stationName:(id)arg2;
- (void)_reloadRadioStations;
- (void)_setCurrentTableView;
- (void)_showLoadingScreen;
- (void)_startPlayingStation:(id)arg1;
- (id)_stationFromIndexPath:(id)arg1;
- (void)_updateViewForNetworkType:(long long)arg1;
- (id)activityIndicator;
- (unsigned long long)allStationsIndex;
- (id)currentlyPlayingRadioStation;
- (void)dealloc;
- (bool)didInitiatePlayback;
- (void)didStartPlaying:(id)arg1;
- (void)errorViewDidTapButton:(id)arg1;
- (void)featuredStationsDidUpdate:(id)arg1;
- (bool)featuredStationsFinishedLoading;
- (unsigned long long)featuredStationsIndex;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2;
- (id)loadingTimer;
- (id)nowPlayingNavigationController;
- (unsigned long long)prominentStationIndex;
- (bool)radioStationsLoaded;
- (void)recentStationsDidUpdate:(id)arg1;
- (bool)recentStationsFinishedLoading;
- (id)selectedIndexPath;
- (void)setActivityIndicator:(id)arg1;
- (void)setAllStationsIndex:(unsigned long long)arg1;
- (void)setCurrentlyPlayingRadioStation:(id)arg1;
- (void)setDidInitiatePlayback:(bool)arg1;
- (void)setFeaturedStationsFinishedLoading:(bool)arg1;
- (void)setFeaturedStationsIndex:(unsigned long long)arg1;
- (void)setLoadingTimer:(id)arg1;
- (void)setNowPlayingNavigationController:(id)arg1;
- (void)setProminentStationIndex:(unsigned long long)arg1;
- (void)setRadioStationsLoaded:(bool)arg1;
- (void)setRecentStationsFinishedLoading:(bool)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)viewController;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end