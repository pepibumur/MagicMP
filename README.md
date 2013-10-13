# MagicMP - MultiPeer framework done better
I noticed that the new MultiPeer framework introduced in iOS 7 was segmented in two main components and still using delegates. The framework has an abstraction layer in viewController format to explore nearby users, or advertiser devices, but.. What if we don't want to implement  the module using viewControllers? **Here's where MagicMP appears, it unifies both components in an easy way, with blocks and a singleton class, use whenever you want without depending on a ViewController**

##  Components
* **MagicMP Class:** Singleton class where everything is implemented
* **DemoProject:** Where we've implemented MagicMP. It's useful to see the implementation
* **Unit Tests:** Module's been developed using TDD. This way if any change causes the module not to work as expected, Unit Tests will cause crash. TravisCI is connected with the repo.
