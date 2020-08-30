# Navigation Example

The MainWindow.xaml code snippet below shows what is necessary to swap between pages. `x.Name` properties are available in the MainWindow.xaml.cpp file as variables.
```
<NavigationView 
    x:Name="NavView"
    PaneTitle="Welcome"
    ItemInvoked="NavView_ItemInvoked">
    <NavigationView.MenuItems>
        <NavigationViewItem Content="A" x:Name="A" Tag="A"/>
        <NavigationViewItem Content="B" x:Name="B" Tag="B"/>
    </NavigationView.MenuItems>
    <ScrollViewer>
        <Frame x:Name="ContentFrame" Padding="12,0,12,24" IsTabStop="True"/>
    </ScrollViewer>
</NavigationView>
```